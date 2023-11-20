/// --------------------------------------------------------------------------
/// \file fast-reboot.c
///
/// \brief  Trigger a very fast reboot.
///
/// \author 2016-2023 Christophe Blaess <christophe.blaess@logilin.fr>
/// \copyright Logilin 2016-20203.
///
/// --------------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/reboot.h>



int main(void)
{
	sync();
	reboot(RB_AUTOBOOT);
	perror("reboot");
	exit(EXIT_FAILURE);
}

