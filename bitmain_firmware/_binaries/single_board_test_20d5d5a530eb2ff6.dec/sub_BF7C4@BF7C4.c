int __fastcall sub_BF7C4(int a1, int *a2, int a3)
{
  int v6; // r0
  int v7; // r6
  _DWORD *v8; // r8
  int *v9; // r5
  int v10; // r0
  int v11; // r2
  int v12; // r4
  int v14; // [sp+14h] [bp-8h] BYREF

  if ( sub_B85BC(*(_DWORD **)(a3 + 8)) > 10000 )
  {
    v12 = -1;
    sub_D0048(5, 102, 103, "crypto/dh/dh_key.c", 206);
    v7 = 0;
  }
  else
  {
    v6 = sub_130B08();
    v7 = v6;
    if ( !v6 )
      goto LABEL_14;
    sub_130BC0(v6);
    v8 = (_DWORD *)sub_130CCC(v7);
    if ( !v8 )
      goto LABEL_14;
    if ( !*(_DWORD *)(a3 + 24) )
    {
      v12 = -1;
      sub_D0048(5, 102, 100, "crypto/dh/dh_key.c", 219);
      goto LABEL_12;
    }
    v9 = (int *)(*(_DWORD *)(a3 + 28) & 1);
    if ( !v9
      || (v9 = sub_B96D8((int **)(a3 + 32), *(_DWORD *)(a3 + 72), *(int ***)(a3 + 8), v7),
          sub_B87B8(*(_DWORD *)(a3 + 24), 4),
          v9) )
    {
      if ( !sub_BF658(a3, a2, &v14) || v14 )
      {
        v12 = -1;
        sub_D0048(5, 102, 102, "crypto/dh/dh_key.c", 232);
      }
      else if ( (*(int (__fastcall **)(int, _DWORD *, int *, _DWORD, _DWORD, int, int *))(*(_DWORD *)(a3 + 64) + 12))(
                  a3,
                  v8,
                  a2,
                  *(_DWORD *)(a3 + 24),
                  *(_DWORD *)(a3 + 8),
                  v7,
                  v9) )
      {
        v10 = sub_B85BC(*(_DWORD **)(a3 + 8));
        v11 = v10 + 14;
        if ( v10 + 7 >= 0 )
          v11 = v10 + 7;
        v12 = sub_B8CD4(v8, a1, v11 >> 3);
      }
      else
      {
        v12 = -1;
        sub_D0048(5, 102, 3, "crypto/dh/dh_key.c", 238);
      }
    }
    else
    {
LABEL_14:
      v12 = -1;
    }
  }
LABEL_12:
  sub_130C74(v7);
  sub_130B5C(v7);
  return v12;
}
