int __fastcall sub_1BD69C(int a1, int a2, int a3)
{
  _DWORD *v3; // r7
  unsigned int v5; // r3
  const char *v7; // r5
  int result; // r0
  _BYTE v9[4]; // [sp+8h] [bp-24h] BYREF
  _DWORD v10[2]; // [sp+Ch] [bp-20h] BYREF
  _DWORD savedregs[7]; // [sp+14h] [bp-18h] BYREF

  v3 = (_DWORD *)a3;
  v5 = *(_DWORD *)(a2 + 36);
  v7 = *(const char **)a2;
  if ( v5 <= 0x80 )
    v10[0] = *(_DWORD *)(a2 + 36);
  else
    a3 = 128;
  if ( v5 > 0x80 )
    v10[0] = a3;
  if ( !strcmp(v7, ".note.ABI-tag") )
  {
    if ( ((int (__fastcall *)(int, int, _BYTE *, _DWORD *, const char *, int))loc_1BD56C)(a1, a2, v9, v10, "GNU", 16) )
    {
      result = (*(int (__fastcall **)(_DWORD *))(*(_DWORD *)(a1 + 4) + 76))(&savedregs[1]);
      switch ( result )
      {
        case 0:
          *v3 = 4;
          break;
        case 1:
          *v3 = 2;
          break;
        case 2:
          *v3 = 3;
          break;
        case 3:
          goto LABEL_19;
        case 4:
          goto LABEL_10;
        default:
          result = sub_946B0("GNU ABI tag value %u unrecognized.", result);
          break;
      }
    }
    else
    {
      result = ((int (__fastcall *)(int, int, _BYTE *, _DWORD *, const char *, int))loc_1BD56C)(
                 a1,
                 a2,
                 v9,
                 v10,
                 "FreeBSD",
                 4);
      if ( result )
LABEL_19:
        *v3 = 5;
    }
  }
  else
  {
    if ( !strcmp(v7, ".note.netbsd.ident") )
    {
      result = ((int (__fastcall *)(int, int, _BYTE *, _DWORD *, const char *, int))loc_1BD56C)(
                 a1,
                 a2,
                 v9,
                 v10,
                 "NetBSD",
                 4);
      if ( result )
        goto LABEL_10;
    }
    if ( !strcmp(v7, ".note.openbsd.ident") )
    {
      result = ((int (__fastcall *)(int, int, _BYTE *, _DWORD *, const char *, int))loc_1BD56C)(
                 a1,
                 a2,
                 v9,
                 v10,
                 "OpenBSD",
                 4);
      if ( result )
      {
        *v3 = 7;
        return result;
      }
    }
    result = strcmp(v7, ".note.netbsdcore.procinfo");
    if ( !result )
LABEL_10:
      *v3 = 6;
  }
  return result;
}
