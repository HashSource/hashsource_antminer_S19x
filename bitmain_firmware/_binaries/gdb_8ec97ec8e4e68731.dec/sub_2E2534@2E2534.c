int __fastcall sub_2E2534(int a1, int a2, unsigned int a3)
{
  int v3; // r3
  _DWORD *v5; // r12
  unsigned __int64 v6; // r4
  int v8; // r0
  int v9; // r8
  unsigned int v10; // r1
  int v11; // r0
  char *v12; // r7
  int v13; // r0
  int v14; // r2
  int v15; // r3
  int v16; // r2
  char v17[4]; // [sp+14h] [bp-34h] BYREF
  char ptr; // [sp+18h] [bp-30h] BYREF

  v3 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(v3 + 40) != 1 )
    return 0;
  v5 = *(_DWORD **)(v3 + 196);
  if ( v5 )
  {
    while ( v5[1] != a2 || v5[2] != a3 )
    {
      v5 = (_DWORD *)*v5;
      if ( !v5 )
        goto LABEL_9;
    }
    return 1;
  }
  else
  {
LABEL_9:
    v6 = __PAIR64__(a3, a2);
    v8 = sub_2ACBF4(a2, 36);
    v9 = v8;
    if ( !v8 )
      return 0;
    if ( sub_2CDA08(v6, *(_DWORD *)(v6 + 160) + 72, 1u, SHIDWORD(v6), v8 + 16, &ptr, v17) )
    {
      v10 = *(_DWORD *)(v9 + 32);
      if ( v10 - 1 > 0xFFFFFEFE || (v11 = sub_2CFEF4(v6, v10)) != 0 && *(char ***)(v11 + 60) != &off_470950 )
      {
        v12 = sub_2CD844(v6, *(_DWORD *)(*(_DWORD *)(v6 + 160) + 100), *(_DWORD *)(v9 + 24));
        v13 = *(_DWORD *)(*(_DWORD *)(a1 + 28) + 84);
        if ( v13 || (v13 = sub_2F00E8(0), (*(_DWORD *)(*(_DWORD *)(a1 + 28) + 84) = v13) != 0) )
        {
          v14 = sub_2F0184(v13, v12, 0);
          if ( v14 != -1 )
          {
            v15 = *(_DWORD *)(a1 + 28);
            *(_DWORD *)(v9 + 24) = v14;
            v16 = *(_DWORD *)(v15 + 76) + 1;
            *(_DWORD *)v9 = *(_DWORD *)(v15 + 196);
            *(_DWORD *)(v15 + 196) = v9;
            *(_QWORD *)(v9 + 4) = v6;
            *(_DWORD *)(v15 + 76) = v16;
            *(_BYTE *)(v9 + 28) &= 0xFu;
            return 1;
          }
        }
        return 0;
      }
      sub_2AD1F0(v6);
      return 2;
    }
    else
    {
      sub_2AD1F0(v6);
      return 0;
    }
  }
}
