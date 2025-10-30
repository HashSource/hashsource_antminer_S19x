int __fastcall sub_195604(int a1, int a2)
{
  int v4; // r0
  int v5; // r4
  _DWORD *v7; // r4
  int v8; // [sp+0h] [bp-14h] BYREF
  int v9; // [sp+4h] [bp-10h]
  int *v10; // [sp+8h] [bp-Ch]
  int (*v11)(); // [sp+Ch] [bp-8h]

  v8 = 0;
  v4 = sub_323B2C(1, off_4714A0, off_47149C[0], 0);
  v9 = v4;
  if ( a2 )
  {
    ((void (__fastcall *)(int))loc_1CD290)(a2);
    v10 = &v8;
    v11 = sub_19657C;
    sub_21AA24(a1, &v8, sub_19657C);
LABEL_3:
    v4 = v9;
    goto LABEL_4;
  }
  v7 = (_DWORD *)dword_487D28;
  if ( dword_487D28 )
  {
    do
    {
      if ( !v7[6] )
      {
        ((void (__fastcall *)(_DWORD *))loc_1CD290)(v7);
        v10 = &v8;
        v11 = sub_19657C;
        sub_21AA24(a1, &v8, sub_19657C);
      }
      v7 = (_DWORD *)*v7;
    }
    while ( v7 );
    goto LABEL_3;
  }
LABEL_4:
  v5 = v8;
  v8 = 0;
  if ( v4 )
    sub_323B84(v4);
  return v5;
}
