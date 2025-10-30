char *__fastcall sub_2DAE28(int a1, void *a2, _DWORD *a3, char *s1, void *a5, size_t a6)
{
  const char *v10; // r3
  int v12; // r12
  const char *v13; // r3
  _DWORD *v14; // r2
  void *src; // [sp+4h] [bp-10h]
  size_t v16; // [sp+8h] [bp-Ch]

  if ( !strcmp(s1, ".reg2") )
    return sub_2DA3B0(a1, a2, a3, "CORE", 2, a5, a6);
  if ( !strcmp(s1, ".reg-xfp") )
  {
    v12 = 1189489535;
    LOWORD(v13) = (unsigned __int16)"LINUX";
    v16 = a6;
    src = a5;
    v14 = a3;
    goto LABEL_8;
  }
  if ( strcmp(s1, ".reg-xstate") )
  {
    if ( !strcmp(s1, ".reg-ppc-vmx") )
    {
      v12 = 256;
    }
    else if ( !strcmp(s1, ".reg-ppc-vsx") )
    {
      v12 = 258;
    }
    else if ( !strcmp(s1, ".reg-s390-high-gprs") )
    {
      v12 = 768;
    }
    else if ( !strcmp(s1, ".reg-s390-timer") )
    {
      v12 = 769;
    }
    else if ( !strcmp(s1, ".reg-s390-todcmp") )
    {
      v12 = 770;
    }
    else if ( !strcmp(s1, ".reg-s390-todpreg") )
    {
      v12 = 771;
    }
    else if ( !strcmp(s1, ".reg-s390-ctrs") )
    {
      v12 = 772;
    }
    else if ( !strcmp(s1, ".reg-s390-prefix") )
    {
      v12 = 773;
    }
    else if ( !strcmp(s1, ".reg-s390-last-break") )
    {
      v12 = 774;
    }
    else if ( !strcmp(s1, ".reg-s390-system-call") )
    {
      v12 = 775;
    }
    else if ( !strcmp(s1, ".reg-s390-tdb") )
    {
      v12 = 776;
    }
    else if ( !strcmp(s1, ".reg-s390-vxrs-low") )
    {
      v12 = 777;
    }
    else if ( !strcmp(s1, ".reg-s390-vxrs-high") )
    {
      v12 = 778;
    }
    else if ( !strcmp(s1, ".reg-s390-gs-cb") )
    {
      v12 = 779;
    }
    else if ( !strcmp(s1, ".reg-s390-gs-bc") )
    {
      v12 = 780;
    }
    else if ( !strcmp(s1, ".reg-arm-vfp") )
    {
      v12 = 1024;
    }
    else if ( !strcmp(s1, ".reg-aarch-tls") )
    {
      v12 = 1025;
    }
    else if ( !strcmp(s1, ".reg-aarch-hw-break") )
    {
      v12 = 1026;
    }
    else
    {
      if ( strcmp(s1, ".reg-aarch-hw-watch") )
        return 0;
      v12 = 1027;
    }
    LOWORD(v13) = -21552;
    v16 = a6;
    v14 = a3;
    src = a5;
LABEL_8:
    HIWORD(v13) = (unsigned int)"LINUX" >> 16;
    return sub_2DA3B0(a1, a2, v14, v13, v12, src, v16);
  }
  v10 = "FreeBSD";
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 12) != 9 )
    v10 = "LINUX";
  return sub_2DA3B0(a1, a2, a3, v10, 514, a5, a6);
}
