int __fastcall sub_2ADB48(int a1, const char *a2, const char *a3)
{
  char *v6; // r0
  char *v7; // r5
  const char **v8; // r12
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // r2

  if ( (*(_BYTE *)(a1 + 43) & 0x40) != 0 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(5);
  }
  else
  {
    v6 = sub_2AAC2C((_DWORD *)(a1 + 72), a2, 1, 0);
    v7 = v6;
    if ( v6 )
    {
      if ( !*((_DWORD *)v6 + 4) )
      {
        v8 = (const char **)(v6 + 16);
LABEL_7:
        v8[5] = a3;
        *v8 = a2;
        return sub_2AD64C((_DWORD *)a1, (int)v8);
      }
      v9 = (_DWORD *)sub_2AD6C0(0, a1 + 72);
      if ( v9 )
      {
        v10 = *((_DWORD *)v7 + 1);
        v11 = *((_DWORD *)v7 + 2);
        v8 = (const char **)(v9 + 4);
        *v9 = *(_DWORD *)v7;
        v9[1] = v10;
        v9[2] = v11;
        *(_DWORD *)v7 = v9;
        goto LABEL_7;
      }
    }
  }
  return 0;
}
