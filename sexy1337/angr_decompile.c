#include <stdio.h>
#include <string.h>

extern struct_0 *g_403fe8;

long long _init()
{
    struct struct_0 **v1;  // rax

    v1 = g_403fe8;
    if (g_403fe8)
        v1 = g_403fe8();
    return v1;
}

extern unsigned long long g_403f90;

void sub_401020()
{
    unsigned long long v0;  // [sp-0x8]

    v0 = g_403f90;
    goto *((long long *)4210584);
}

long long sub_401030()
{
    void* v0;  // [sp-0x8]

    v0 = 0;
    return (unsigned long long)sub_401020();
}

long long sub_401040()
{
    unsigned long long v0;  // [sp-0x8]

    v0 = 1;
    return (unsigned long long)sub_401020();
}

long long sub_401050()
{
    unsigned long long v0;  // [sp-0x8]

    v0 = 2;
    return (unsigned long long)sub_401020();
}

long long sub_401060()
{
    unsigned long long v0;  // [sp-0x8]

    v0 = 3;
    return (unsigned long long)sub_401020();
}

long long sub_401070()
{
    unsigned long long v0;  // [sp-0x8]

    v0 = 4;
    return (unsigned long long)sub_401020();
}

long long sub_401080()
{
    unsigned long long v0;  // [sp-0x8]

    v0 = 5;
    return (unsigned long long)sub_401020();
}

long long sub_401090()
{
    unsigned long long v0;  // [sp-0x8]

    v0 = 6;
    return (unsigned long long)sub_401020();
}

long long _start()
{
    unsigned long long v0;  // [sp+0x0]
    unsigned long v1;  // [bp+0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rdx

    v0 = v2;
    __libc_start_main(main, v0, &v1, 0, 0, v3); /* do not return */
}

long long sub_401145()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198725()
}

extern char __TMC_END__;
extern unsigned long long g_403fe0;

void deregister_tm_clones()
{
    return;
}

extern unsigned long long g_403ff0;

void register_tm_clones()
{
    return;
}

extern char completed.0;
extern unsigned long long g_403ff8;

long long __do_global_dtors_aux()
{
    unsigned long v0;  // [sp-0x8]
    unsigned long v3;  // rax

    if (completed.0)
        return v3;
    *((int *)&v0) = vvar_7{reg 56};
    if (!g_403ff8)
    {
        completed.0 = 1;
        return (unsigned long long)deregister_tm_clones();
    }
    __cxa_finalize();
}

long long frame_dummy()
{
    return (unsigned long long)register_tm_clones();
}

extern FILE_t *__TMC_END__;

int main()
{
    char v0;  // [bp-0x88]
    char v1;  // [bp-0x48]

    generate_password(&v1, "sexy1337");
    printf("Password: %s\n", &v1);
    encrypt_decrypt(&v1, 4294967210);
    printf("Enter the password: ");
    fgets(&v0, 50, __TMC_END__);
    (&v0)[strcspn(&v0, "\n")] = 0;
    encrypt_decrypt(&v0, 4294967210);
    if (strcmp(&v0, &v1))
    {
        puts("Access Denied!");
        return 0;
    }
    puts("Access Granted!");
    return 0;
}

void encrypt_decrypt(char *a0, char a1)
{
    unsigned int v0;  // [sp-0xc]

    for (v0 = 0; a0[v0]; v0 += 1)
    {
        a0[v0] = a0[v0] ^ a1;
    }
    return;
}

void generate_password(char *a0, char *a1)
{
    char *v0;  // [sp-0x18]
    char *v1;  // [sp-0x10]

    v1 = strlen(a1);
    for (v0 = 0; v0 < v1; v0 += 1)
    {
        *((char *)(v0 + a0)) = *((char *)(v0 + a1)) + 3;
    }
    *((char *)(v1 + a0)) = 0;
    return;
}

long long calculate_checksum(char *a0)
{
    unsigned int v0;  // [sp-0x10]
    unsigned int v1;  // [sp-0xc]
    unsigned long long v3;  // rdx

    v0 = 0;
    for (v1 = 0; a0[v1]; v1 += 1)
    {
        v0 += a0[v1];
    }
    v3 = v0;
    return (v3 + (((v3 & 4294967295 & 4294967295) >> 31 & 4294967295 & 4294967295) >> 24 & 4294967295) & 4294967295 & 4294967295) - (((v3 & 4294967295 & 4294967295) >> 31 & 4294967295 & 4294967295) >> 24 & 4294967295) & 4294967295 & 4294967295;
}

long long _fini()
{
    unsigned long v1;  // rax

    return v1;
}

