#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x16894a82, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x1b88e41, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x4f1a8f6, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0xc32316cc, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x9c7ea045, __VMLINUX_SYMBOL_STR(nf_afinfo) },
	{ 0xf1c69218, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x30004eee, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xbb5fc881, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe5d19648, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0x86e4bc56, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "EEFA3A2618E927B36E63F4B");
