#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2a38679a, "module_layout" },
	{ 0x3642dd25, "param_ops_int" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x4929e82d, "tcp_reno_undo_cwnd" },
	{ 0xa0ccfb3c, "tcp_slow_start" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37b758cc, "tcp_unregister_congestion_control" },
	{ 0xe2e668ad, "tcp_register_congestion_control" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

