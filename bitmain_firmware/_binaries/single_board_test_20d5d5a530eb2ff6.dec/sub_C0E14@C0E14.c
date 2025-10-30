int __fastcall sub_C0E14(_BYTE *a1, int a2, _DWORD *a3, int a4)
{
  _DWORD *v6; // r0
  int v8; // r0
  int v9; // r5
  bool v10; // zf
  int *v11; // r6
  int v12; // r7
  int v13; // r9
  int v14; // r0
  bool v15; // zf
  int v16; // r8
  int v17; // r4
  bool v18; // zf
  int v19; // r1
  int *v20; // r0
  int (__fastcall *v21)(int, int, _DWORD, int *, _DWORD, int, _DWORD, int, int *); // r5
  int *v24; // [sp+20h] [bp-Ch] BYREF
  int *v25; // [sp+24h] [bp-8h] BYREF

  if ( *(_DWORD *)(a4 + 8) && (v6 = *(_DWORD **)(a4 + 12)) != 0 && *(_DWORD *)(a4 + 16) )
  {
    v8 = sub_B85BC(v6);
    v9 = v8;
    v10 = (v8 & 0xFFFFFFBF) == 160;
    if ( (v8 & 0xFFFFFFBF) != 0xA0 )
      v10 = v8 == 256;
    if ( !v10 )
    {
      sub_D0048(10, 113, 102, "crypto/dsa/dsa_ossl.c", 315);
      return -1;
    }
    if ( sub_B85BC(*(_DWORD **)(a4 + 8)) <= 10000 )
    {
      v11 = (int *)sub_B822C();
      v12 = sub_B822C();
      v13 = sub_B822C();
      v14 = sub_130B08();
      v15 = v12 == 0;
      if ( v12 )
        v15 = v11 == 0;
      v16 = v14;
      if ( !v15 )
      {
        v18 = v14 == 0;
        if ( v14 )
          v18 = v13 == 0;
        if ( !v18 )
        {
          sub_C082C(a3, &v24, &v25);
          if ( sub_B85B0((int)v24)
            || sub_B8720((int)v24)
            || sub_B82F8(v24, *(int **)(a4 + 12)) >= 0
            || sub_B85B0((int)v25)
            || sub_B8720((int)v25)
            || sub_B82F8(v25, *(int **)(a4 + 12)) >= 0 )
          {
            v17 = 0;
            goto LABEL_14;
          }
          if ( sub_1330EC(v12, v25, *(_DWORD *)(a4 + 12), v16) )
          {
            v19 = v9 >> 3;
            if ( v9 >> 3 >= a2 )
              v19 = a2;
            if ( sub_B8AEC(a1, v19, v11)
              && sub_133F3C(v11, v11, v12, *(_DWORD *)(a4 + 12), v16)
              && sub_133F3C(v12, v24, v12, *(_DWORD *)(a4 + 12), v16) )
            {
              if ( (*(_DWORD *)(a4 + 28) & 1) != 0 )
              {
                v20 = sub_B96D8((int **)(a4 + 32), *(_DWORD *)(a4 + 52), *(int ***)(a4 + 8), v16);
                if ( !v20 )
                  goto LABEL_13;
              }
              else
              {
                v20 = 0;
              }
              v21 = *(int (__fastcall **)(int, int, _DWORD, int *, _DWORD, int, _DWORD, int, int *))(*(_DWORD *)(a4 + 44) + 16);
              if ( v21 )
              {
                if ( v21(a4, v13, *(_DWORD *)(a4 + 16), v11, *(_DWORD *)(a4 + 20), v12, *(_DWORD *)(a4 + 8), v16, v20) )
                  goto LABEL_35;
              }
              else if ( sub_132634(
                          v13,
                          *(_DWORD *)(a4 + 16),
                          v11,
                          *(_DWORD *)(a4 + 20),
                          v12,
                          *(_DWORD *)(a4 + 8),
                          v16,
                          v20) )
              {
LABEL_35:
                if ( sub_131220(0, v11, v13, *(_DWORD *)(a4 + 12), v16) )
                {
                  v17 = sub_B82F8(v11, v24) == 0;
                  goto LABEL_14;
                }
              }
            }
          }
        }
      }
LABEL_13:
      v17 = -1;
      sub_D0048(10, 113, 3, "crypto/dsa/dsa_ossl.c", 396);
LABEL_14:
      sub_130B5C(v16);
      sub_B895C((int)v11);
      sub_B895C(v12);
      sub_B895C(v13);
      return v17;
    }
    sub_D0048(10, 113, 103, "crypto/dsa/dsa_ossl.c", 320);
    return -1;
  }
  else
  {
    sub_D0048(10, 113, 101, "crypto/dsa/dsa_ossl.c", 308);
    return -1;
  }
}
