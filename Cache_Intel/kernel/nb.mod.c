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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7ba62dba, "module_layout" },
	{ 0x9178b19b, "kobject_put" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x7410aba2, "strreplace" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x4811682b, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0x7a00b645, "single_release" },
	{ 0x8693e26e, "ex_handler_rdmsr_unsafe" },
	{ 0xad4c6a80, "seq_printf" },
	{ 0xd7df2062, "__tracepoint_read_msr" },
	{ 0xc909f65e, "remove_proc_entry" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xd1b70d02, "filp_close" },
	{ 0x25db1577, "do_trace_write_msr" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x892b26a0, "set_memory_nx" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x91715312, "sprintf" },
	{ 0x5671fef2, "seq_read" },
	{ 0xddf6dbdb, "kobject_create_and_add" },
	{ 0x3593fd6, "kernel_read" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xa1752ed2, "kern_path" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x973dc9f6, "__tracepoint_write_msr" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xdf460cde, "ex_handler_wrmsr_unsafe" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe3a53f4c, "sort" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xa916b694, "strnlen" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x39e3c030, "do_trace_read_msr" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x3f0df822, "path_put" },
	{ 0x8ce17c54, "kernel_kobj" },
	{ 0x6a85a51d, "seq_lseek" },
	{ 0xa9bd2676, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x988ed85d, "set_memory_x" },
	{ 0x28318305, "snprintf" },
	{ 0x613f21f5, "proc_create" },
	{ 0x3b4edc15, "sysfs_create_file_ns" },
	{ 0x29747a9a, "vfs_getattr" },
	{ 0xd5db35e0, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

