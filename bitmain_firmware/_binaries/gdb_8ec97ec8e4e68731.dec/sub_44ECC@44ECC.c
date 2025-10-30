int __fastcall sub_44ECC(int a1)
{
  int v1; // r0
  _DWORD *v2; // r4
  int v3; // r5
  int v4; // r1
  int v5; // r2
  int v6; // r8
  int v7; // r9
  int v8; // r0
  int v10; // [sp+Ch] [bp-10h] BYREF
  int v11; // [sp+10h] [bp-Ch]
  int v12; // [sp+14h] [bp-8h]

  v1 = sub_183688(a1);
  v2 = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    v3 = v1;
    do
    {
      while ( 1 )
      {
        if ( v2[11] != 2 && v3 == v2[7] && (unsigned int)(v2[52] - 4) <= 1 )
        {
          v4 = v2[54];
          v5 = v2[55];
          v10 = v2[53];
          v11 = v4;
          v12 = v5;
          v6 = ps_getpid_0(&v10);
          v7 = sub_98F68(&v10);
          sub_40CC0(v7);
          ((void (__fastcall *)(int))loc_42BB0)(v7);
          v1 = v6;
          if ( off_47217C )
            break;
        }
        v2 = (_DWORD *)v2[1];
        if ( !v2 )
          goto LABEL_9;
      }
      v1 = ((int (__fastcall *)(int))off_47217C)(v6);
      v2 = (_DWORD *)v2[1];
    }
    while ( v2 );
  }
LABEL_9:
  if ( sub_4B204(v1) )
  {
    sub_4B330();
  }
  else
  {
    v8 = ps_getpid_0(&dword_4878EC);
    sub_98F50(&v10, v8);
    sub_44904(v10, v11, v12, (int (__fastcall *)(int, int))sub_42A3C, 0);
    sub_44904(v10, v11, v12, (int (__fastcall *)(int, int))&loc_45A48, 0);
    sub_44904(v10, v11, v12, (int (__fastcall *)(int, int))sub_40DA4, 0);
    sub_44904(v10, v11, v12, (int (__fastcall *)(int, int))sub_42C6C, 0);
  }
  return ((int (__fastcall *)(int, int, int))loc_230B18)(dword_4878EC, dword_4878F0, dword_4878F4);
}
