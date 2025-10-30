int __fastcall sub_2D97EC(int a1, int a2)
{
  unsigned int v2; // r3
  int v4; // r6
  int v6; // r2
  int v7; // r3
  int v9; // r0
  int v10; // r6
  int v11; // r0
  int v12; // r2
  int (__fastcall *v13)(int); // r3
  int v14; // r0
  int (*v15)(void); // r3
  int v16; // r0
  _DWORD *v17; // r3
  int v18; // r2
  int (__fastcall *v19)(int, int); // r3
  int v20; // r4
  _BYTE *v21; // r0
  int v22; // r3
  int v23; // r4
  _BYTE *v24; // r0
  int v25; // r3
  const char *v26; // r4
  size_t v27; // r0
  size_t v28; // r0
  _DWORD *v29; // r6
  int v30; // r2
  int v31; // r3
  int v32; // r0
  int v33; // r0
  size_t v34; // r6
  char *v35; // r0
  const char *v36; // r7
  _DWORD *v37; // r0
  int v38; // r12
  int v39; // r1
  int v40; // r0
  size_t v41; // r7
  char *v42; // r0
  const char *v43; // r8
  _DWORD *v44; // r7
  int v45; // r0
  int v46; // r1
  int v47; // r3
  int (__fastcall *v48)(int); // r3
  _DWORD dest[37]; // [sp+Ch] [bp-94h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)(v4 + 444);
  if ( v2 == 773 )
  {
    if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
      return sub_2D8D10(a1, ".reg-s390-prefix", *(_DWORD *)(a2 + 4), 0, *(unsigned int *)(a2 + 20));
    return 1;
  }
  if ( v2 <= 0x305 )
  {
    if ( v2 == 256 )
    {
      if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
        return sub_2D8D10(a1, ".reg-ppc-vmx", *(_DWORD *)(a2 + 4), 0, *(unsigned int *)(a2 + 20));
      return 1;
    }
    if ( v2 <= 0x100 )
    {
      if ( v2 != 3 )
      {
        if ( v2 <= 3 )
        {
          if ( v2 == 1 )
          {
            v15 = *(int (**)(void))(v6 + 264);
            if ( (!v15 || !v15()) && *(_DWORD *)(a2 + 4) == 148 )
            {
              memcpy(dest, *(const void **)(a2 + 16), sizeof(dest));
              v16 = dest[6];
              v17 = *(_DWORD **)(*(_DWORD *)(a1 + 160) + 2344);
              if ( !*v17 )
                *v17 = SLOWORD(dest[3]);
              v18 = *(_DWORD *)(a2 + 20);
              if ( !v17[1] )
                v17[1] = v16;
              v17[2] = v16;
              return sub_2D8D10(a1, ".reg", 72, v18 + 72, (unsigned int)(v18 + 72));
            }
          }
          else if ( v2 == 2 )
          {
            return sub_2D8D10(a1, ".reg2", *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 20), *(unsigned int *)(a2 + 20));
          }
          return 1;
        }
        if ( v2 != 13 )
        {
          if ( v2 == 18 )
          {
            if ( *(_DWORD *)(a2 + 4) < 0x2D8u || strncmp(*(const char **)(a2 + 12), "win32", 5u) )
              return 1;
            v9 = (*(int (__fastcall **)(_DWORD))(v4 + 40))(*(_DWORD *)(a2 + 16));
            v10 = v9;
            switch ( v9 )
            {
              case 2:
                v40 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 40))(*(_DWORD *)(a2 + 16) + 8);
                sprintf((char *)dest, ".reg/%ld", v40);
                v41 = strlen((const char *)dest) + 1;
                v42 = (char *)sub_2ACBF4(a1, v41);
                v43 = v42;
                if ( v42 )
                {
                  memcpy(v42, dest, v41);
                  v44 = (_DWORD *)sub_2ADB48(a1, v43, (const char *)0x100);
                  if ( v44 )
                  {
                    v45 = *(_DWORD *)(a2 + 16);
                    v46 = *(_DWORD *)(a1 + 4);
                    v47 = *(_DWORD *)(a2 + 20) + 12;
                    v44[16] = 2;
                    v44[20] = v47;
                    v48 = *(int (__fastcall **)(int))(v46 + 40);
                    v44[9] = 716;
                    v44[21] = 0;
                    if ( v48(v45 + 8) )
                      return sub_2CC9E0(a1, ".reg", (int)v44) != 0;
                    return 1;
                  }
                }
                break;
              case 3:
                v33 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 40))(*(_DWORD *)(a2 + 16) + 4);
                sprintf((char *)dest, ".module/%08lx", v33);
                v34 = strlen((const char *)dest) + 1;
                v35 = (char *)sub_2ACBF4(a1, v34);
                v36 = v35;
                if ( v35 )
                {
                  memcpy(v35, dest, v34);
                  v37 = (_DWORD *)sub_2ADB48(a1, v36, (const char *)0x100);
                  if ( v37 )
                  {
                    v38 = *(_DWORD *)(a2 + 4);
                    v39 = *(_DWORD *)(a2 + 20);
                    v37[21] = 0;
                    v7 = 1;
                    v37[9] = v38;
                    v37[20] = v39;
                    v37[16] = 2;
                    return v7;
                  }
                }
                break;
              case 1:
                v11 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 40))(*(_DWORD *)(a2 + 16) + 8);
                v12 = *(_DWORD *)(a2 + 16);
                v13 = *(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 40);
                *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 2344) + 4) = v11;
                v14 = v13(v12 + 12);
                v7 = v10;
                **(_DWORD **)(*(_DWORD *)(a1 + 160) + 2344) = v14;
                return v7;
              default:
                return 1;
            }
          }
          else
          {
            if ( v2 != 6 )
              return 1;
            v29 = (_DWORD *)sub_2ADB48(a1, ".auxv", (const char *)0x100);
            if ( v29 )
            {
              v30 = *(_DWORD *)(a2 + 4);
              v31 = *(_DWORD *)(a2 + 20);
              v29[21] = 0;
              v29[9] = v30;
              v29[20] = v31;
              v32 = sub_2A789C(a1);
              v7 = 1;
              v29[16] = v32 / 32 + 1;
              return v7;
            }
          }
          return 0;
        }
      }
      v19 = *(int (__fastcall **)(int, int))(v6 + 268);
      if ( (!v19 || !v19(a1, a2)) && *(_DWORD *)(a2 + 4) == 124 )
      {
        memcpy(dest, *(const void **)(a2 + 16), 0x7Cu);
        v20 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 2344);
        *(_DWORD *)(v20 + 4) = dest[3];
        v21 = sub_2D8F98(a1, &dest[7], 0x10u);
        v22 = *(_DWORD *)(a1 + 160);
        *(_DWORD *)(v20 + 12) = v21;
        v23 = *(_DWORD *)(v22 + 2344);
        v24 = sub_2D8F98(a1, &dest[11], 0x50u);
        v25 = *(_DWORD *)(a1 + 160);
        *(_DWORD *)(v23 + 16) = v24;
        v26 = *(const char **)(*(_DWORD *)(v25 + 2344) + 16);
        v27 = strlen(v26);
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v26[v28] == 32 )
          {
            v7 = 1;
            v26[v28] = 0;
            return v7;
          }
        }
      }
      return 1;
    }
    if ( v2 == 769 )
    {
      if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
        return sub_2D8D10(a1, ".reg-s390-timer", *(_DWORD *)(a2 + 4), 0, *(unsigned int *)(a2 + 20));
    }
    else if ( v2 <= 0x301 )
    {
      if ( v2 == 514 )
      {
        if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
          return sub_2D8D10(a1, ".reg-xstate", *(_DWORD *)(a2 + 4), 0, *(unsigned int *)(a2 + 20));
      }
      else if ( v2 == 768 )
      {
        if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
          return sub_2D8D10(
                   a1,
                   ".reg-s390-high-gprs",
                   *(_DWORD *)(a2 + 4),
                   *(_DWORD *)(a2 + 20),
                   *(unsigned int *)(a2 + 20));
      }
      else if ( v2 == 258 && *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
      {
        return sub_2D8D10(a1, ".reg-ppc-vsx", *(_DWORD *)(a2 + 4), 0, *(unsigned int *)(a2 + 20));
      }
    }
    else if ( v2 == 771 )
    {
      if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
        return sub_2D8D10(a1, ".reg-s390-todpreg", *(_DWORD *)(a2 + 4), 0, *(unsigned int *)(a2 + 20));
    }
    else if ( v2 >= 0x304 )
    {
      if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
        return sub_2D8D10(a1, ".reg-s390-ctrs", *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 20), *(unsigned int *)(a2 + 20));
    }
    else if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
    {
      return sub_2D8D10(a1, ".reg-s390-todcmp", *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 20), *(unsigned int *)(a2 + 20));
    }
    return 1;
  }
  if ( v2 == 780 )
  {
    if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
      return sub_2D8D10(a1, ".reg-s390-gs-bc", *(_DWORD *)(a2 + 4), 0, *(unsigned int *)(a2 + 20));
    return 1;
  }
  if ( v2 <= 0x30C )
  {
    if ( v2 == 776 )
    {
      if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
        return sub_2D8D10(a1, ".reg-s390-tdb", *(_DWORD *)(a2 + 4), 0, *(unsigned int *)(a2 + 20));
    }
    else if ( v2 <= 0x308 )
    {
      if ( v2 == 774 )
      {
        if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
          return sub_2D8D10(a1, ".reg-s390-last-break", *(_DWORD *)(a2 + 4), 0, *(unsigned int *)(a2 + 20));
      }
      else if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
      {
        return sub_2D8D10(
                 a1,
                 ".reg-s390-system-call",
                 *(_DWORD *)(a2 + 4),
                 *(_DWORD *)(a2 + 20),
                 *(unsigned int *)(a2 + 20));
      }
    }
    else if ( v2 == 778 )
    {
      if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
        return sub_2D8D10(a1, ".reg-s390-vxrs-high", *(_DWORD *)(a2 + 4), 0, *(unsigned int *)(a2 + 20));
    }
    else if ( v2 > 0x30A )
    {
      if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
        return sub_2D8D10(a1, ".reg-s390-gs-cb", *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 20), *(unsigned int *)(a2 + 20));
    }
    else if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
    {
      return sub_2D8D10(a1, ".reg-s390-vxrs-low", *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 20), *(unsigned int *)(a2 + 20));
    }
    return 1;
  }
  if ( v2 == 1027 )
  {
    if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
      return sub_2D8D10(a1, ".reg-aarch-hw-watch", *(_DWORD *)(a2 + 4), 0, *(unsigned int *)(a2 + 20));
    return 1;
  }
  if ( v2 <= 0x403 )
  {
    if ( v2 == 1025 )
    {
      if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
        return sub_2D8D10(a1, ".reg-aarch-tls", *(_DWORD *)(a2 + 4), 0, *(unsigned int *)(a2 + 20));
    }
    else if ( v2 > 0x401 )
    {
      if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
        return sub_2D8D10(
                 a1,
                 ".reg-aarch-hw-break",
                 *(_DWORD *)(a2 + 4),
                 *(_DWORD *)(a2 + 20),
                 *(unsigned int *)(a2 + 20));
    }
    else if ( v2 == 1024 && *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
    {
      return sub_2D8D10(a1, ".reg-arm-vfp", *(_DWORD *)(a2 + 4), 0, *(unsigned int *)(a2 + 20));
    }
    return 1;
  }
  if ( v2 == 1189489535 )
  {
    if ( *(_DWORD *)a2 == 6 && !strcmp(*(const char **)(a2 + 12), "LINUX") )
      return sub_2D8D10(a1, ".reg-xfp", *(_DWORD *)(a2 + 4), 0, *(unsigned int *)(a2 + 20));
    return 1;
  }
  if ( v2 == 1397311305 )
    return sub_2D8D10(
             a1,
             ".note.linuxcore.siginfo",
             *(_DWORD *)(a2 + 4),
             *(_DWORD *)(a2 + 20),
             *(unsigned int *)(a2 + 20));
  if ( v2 != 1179208773 )
    return 1;
  return sub_2D8D10(a1, ".note.linuxcore.file", *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 20), *(unsigned int *)(a2 + 20));
}
