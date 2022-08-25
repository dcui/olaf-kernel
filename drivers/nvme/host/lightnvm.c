/*
 * nvme-lightnvm.c - LightNVM NVMe device
 *
 * Copyright (C) 2014-2015 IT University of Copenhagen
 * Initial release: Matias Bjorling <mb@lightnvm.io>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139,
 * USA.
 *
 */

#include "nvme.h"

#include <linux/nvme.h>
#include <linux/lightnvm.h>
#include <uapi/linux/lightnvm.h>

int nvme_nvm_ioctl(struct nvme_ns *ns, unsigned int cmd, unsigned long arg)
{
	return -ENOTTY;
}

int nvme_nvm_register(struct nvme_ns *ns, char *disk_name, int node)
{
	return 0;
}

void nvme_nvm_unregister(struct nvme_ns *ns)
{
}

int nvme_nvm_register_sysfs(struct nvme_ns *ns)
{
	return 0;
}

void nvme_nvm_unregister_sysfs(struct nvme_ns *ns)
{
}
