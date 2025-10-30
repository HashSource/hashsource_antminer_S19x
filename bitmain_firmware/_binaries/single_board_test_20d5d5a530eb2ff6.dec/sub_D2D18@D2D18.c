int __fastcall sub_D2D18(int *a1, int a2, size_t a3, _DWORD *a4)
{
  int v8; // r0
  _DWORD *v9; // r5
  int v11; // r0
  int v12; // r0

  v8 = sub_D8934(a1);
  v9 = (_DWORD *)v8;
  switch ( a2 )
  {
    case 0:
      v11 = *a1;
      v9[124] = 0;
      v9[125] = 0;
      v9[179] = sub_D8940(v11);
      v9[164] = sub_D8AC0(a1);
      v9[177] = 0;
      v9[178] = 0;
      v9[180] = 16;
      return 1;
    case 8:
      v12 = sub_D8934(a4);
      return sub_E7EF4(v12 + 504, v9 + 126, v12, v12 + 248);
    case 9:
      if ( a3 - 1 > 0xE )
        return 0;
      *(_DWORD *)(v8 + 716) = a3;
      return 1;
    case 16:
      if ( a3 != *(_DWORD *)(v8 + 720) || !sub_D8924(a1) )
        return 0;
      memcpy(a4, v9 + 165, a3);
      return 1;
    case 17:
      if ( a4 )
      {
        if ( a3 == *(_DWORD *)(v8 + 720) && !sub_D8924(a1) )
        {
          memcpy(v9 + 165, a4, a3);
          return 1;
        }
        return 0;
      }
      if ( a3 > 0x10 )
        return 0;
      *(_DWORD *)(v8 + 720) = a3;
      return 1;
    case 37:
      *a4 = *(_DWORD *)(v8 + 716);
      return 1;
    default:
      return -1;
  }
}
