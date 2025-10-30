int __fastcall sub_F1060(int a1, unsigned int a2)
{
  unsigned int v3; // r4
  char **v4; // r0
  _DWORD *v5; // r0
  int v6; // r4
  int v8; // r4
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  char ***v11; // r5
  _DWORD *v12; // r0
  char ***v13; // r5
  _DWORD *v14; // r0
  char ***v15; // r5

  v3 = a2 - 21;
  v4 = sub_EAA20(a2);
  switch ( v3 )
  {
    case 0u:
      *(_DWORD *)(a1 + 16) = v4;
      v8 = sub_B2068();
      *(_DWORD *)(a1 + 20) = v8;
      return v8 != 0;
    case 1u:
      *(_DWORD *)(a1 + 16) = v4;
      v9 = (_DWORD *)sub_EF498();
      *(_DWORD *)(a1 + 20) = v9;
      if ( !v9 )
        return 0;
      v6 = sub_126EFC(*v9, 1);
      if ( v6 )
        return 1;
      sub_EF4AC(*(_DWORD *)(a1 + 20));
      *(_DWORD *)(a1 + 20) = 0;
      return v6;
    case 2u:
      *(_DWORD *)(a1 + 16) = v4;
      v10 = (_DWORD *)sub_EF5A0();
      *(_DWORD *)(a1 + 20) = v10;
      if ( !v10 || !sub_126EFC(*v10, 0) )
        return 0;
      v6 = 1;
      v11 = *(char ****)(*(_DWORD *)(a1 + 20) + 8);
      *v11 = sub_EAA20(0x15u);
      return v6;
    case 3u:
      *(_DWORD *)(a1 + 16) = v4;
      v12 = (_DWORD *)sub_EF6A8();
      *(_DWORD *)(a1 + 20) = v12;
      if ( !v12 || !sub_126EFC(*v12, 1) )
        return 0;
      v6 = 1;
      v13 = *(char ****)(*(_DWORD *)(a1 + 20) + 20);
      *v13 = sub_EAA20(0x15u);
      return v6;
    case 4u:
      *(_DWORD *)(a1 + 16) = v4;
      v14 = (_DWORD *)sub_EF758();
      *(_DWORD *)(a1 + 20) = v14;
      if ( !v14 )
        return 0;
      return sub_126EFC(*v14, 0) != 0;
    case 5u:
      *(_DWORD *)(a1 + 16) = v4;
      v5 = (_DWORD *)sub_EF700();
      *(_DWORD *)(a1 + 20) = v5;
      if ( !v5 || !sub_126EFC(*v5, 0) )
        return 0;
      v6 = 1;
      v15 = *(char ****)(*(_DWORD *)(a1 + 20) + 4);
      *v15 = sub_EAA20(0x15u);
      return v6;
    default:
      sub_D0048(33, 110, 112, (int)"crypto/pkcs7/pk7_lib.c", 170);
      return 0;
  }
}
