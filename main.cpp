#ifdef build_platform_host

#define CATCH_CONFIG_MAIN
#include "build.h"
#include "test.h"

#else

#include "build.h"

 // !: konfiguracja phy
 /*
 clock = div 102
wpisywania odbywaja sie lacznie, przygotowanie rejestru + busy bit (najpierw data potem address)
phy reset - wpisanie do rejestru 0 0x8000 = czekanie aby napewno sie wykonalo
konfiguracja skwe - 
control pad - 4 - x70
clk pad - 8 - x3fc
rx data - 5 - x7777
tx data - 6 - 0
mdd lo - 3 - 1a80
mmd hi - 4 - 6

sprawdzenie czy autonegocjacja jest wspierana - rejestr 1 - bit autocap 0x8

pobranie z rejestru 4 w celu dopisania wartosci autonegocjacji - bity 5, 6, 7, 8
wpisanie do rejestru 9 negocjacji 1000BT bity 9 i 10

polowanie rejestru 1 0x4 (3 bit) - sprawdzenie czy jest link

ustawienie autonegocjacji - rejestr 0 bit 12 - autonegocjacja - bit 9 restart autonegocjacji 

polowanie rejestru 1 o 0x20 (bit 6) - autonegotiation complete

sprawdzenie wynegocjowanego speeda i duplexu
duplex - rejestr 31 bit 0x8
speed - rejestr 31 bit 0x20 (100) albo 0x40 (1000)

ustawienie w mac control wartosci otrzymanych z phy

DMA ---------
busmode - fb
operation - sr, st (na samym koncu - po maszynach z gmac_config)
interrupt - tie, rie, nie

GMAC
przed ustawienie gmac config odczytanie rgmii sgmii mii - ("to clear changed flag")
configuration - ipc, dm, fes + ps zgodnie z phy, be, jd, wd, te, re
interrupt - tsim, lpiim


DESKRYPTOR
rozmiar 4 wordy
wyrownanie z adresem 0x4
status przed wyslaniem 0xf0d00000
deskryptor jest juz w ringu, po uzupelnieniu jedynie poll tx

status spada na 0x70d

bit gli w dma status przerwanie i zmiana linku ?

 */



/*

TXCLK H19
TXEN A20
TXD0 F20
TXD1 J19
TXD2 F21
TXD3 F19

RXCLK G20
RXDV K17
RXD0 A21 
RXD1 B20
RXD2 B18
RXD3 D21

*/



#include "emac.h"
// #include "ksz9021.h"

int main()
{
    Emac emac(0xff702000);

    emac.init();

    /* ---------------------------------------------| info |--------------------------------------------- */

    // unsigned int base = 0xFF702000;
    // Emac emac(base);
    // Ksz9021 ksz(emac.phy, 1, Emac_phy::Speed::DIV_102);
    
    // ksz.reset();
    // //ksz.advertisement_set();
    // //ksz.loopback(true);
    // ksz.negotiate();
    // ksz.link_wait();
    // auto [speed, duplex] = ksz.link_params();

    // auto * configuration = (Configuration *) (base + 0);
    // auto * dma_bus = (Dma_bus *) (base + 0x1000	);
    // auto * dma_address_transmit = (Dma_address_transmit *) (base + 0x1010);
    // auto * dma_operation = (Dma_operation *) (base + 0x1018);
    // auto * dma_poll_tx = (Dma_poll_tx *) (base + 0x1004);

    // configuration->preamble(Configuration::Preamble::SEVEN);
    // configuration->transmit_machine(true);
    // configuration->receive_machine(true);
    // configuration->full_duplex(true);

    // configuration->bursting(true);
    // configuration->watchdog(false);
    // configuration->jabber(false);
    // //configuration->loopback(true);
    // //configuration->forwarding(true);

    // // dma_bus->reset(true);
    // dma_bus->descriptor(Dma_bus::Descriptor::NORMAL);
    // //dma_bus->beats(32);


    // unsigned char buffer[64];

    // Descriptor_tx desc;

    // desc.own(true);
    // desc.last(true);
    // desc.first(true);
    // desc.crc(true);
    // desc.padding(true);
    // desc.crc_insertion(Descriptor_tx::Crc_insertion::IP_HEADER_PAYLOAD);
    // desc.ring_end(true);

    // auto * t = "pizdeczka";

    // for (int i = 0; i < 64; i++)
    // {
    //     buffer[i] = i;
    // }
    
    // memset(buffer, 0xff, 6);
    // memcpy(&buffer[6], t, strlen(t));


    // desc.pointer(0, buffer);
    // //desc.pointer(1, buffer);
    // desc.size(0, 60); // przy MTL thr 16 + 16 bajtach underflow
    // //desc.size(1, 32);

    // dma_address_transmit->set(&desc);

    // dma_operation->transmit(true);
    // dma_operation->receive(true);

    while(1)
    {
        // desc.own(true);
        // dma_poll_tx->demand();

        // for (int i = 0; i < 100000; i++)
        // {
            
        // }
        
    }
}

#endif
