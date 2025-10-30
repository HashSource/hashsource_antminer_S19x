int __fastcall sub_23A168(int a1, int a2)
{
  int v3; // r0
  int result; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  _UNKNOWN **v18; // r3
  const char *v19; // r2
  int v20; // r0
  _DWORD *v21; // r0
  int v22; // lr
  _DWORD *v23; // r4
  void *v24; // r0
  _DWORD *v25; // r0
  int v26; // [sp-4h] [bp-10h]

  switch ( *(_DWORD *)(a1 + 28) )
  {
    case 0:
      sub_1780B4();
      result = *(_DWORD *)(v5 + 64);
      break;
    case 1:
      sub_1780B4();
      result = *(_DWORD *)(v6 + 100);
      break;
    case 2:
      sub_1780B4();
      result = *(_DWORD *)(v7 + 108);
      break;
    case 3:
      sub_1780B4();
      result = *(_DWORD *)(v8 + 116);
      break;
    case 4:
      sub_1780B4();
      result = *(_DWORD *)(v9 + 124);
      break;
    case 5:
      sub_1780B4();
      result = *(_DWORD *)(v10 + 132);
      break;
    case 6:
      sub_1780B4();
      result = *(_DWORD *)(v11 + 104);
      break;
    case 7:
      sub_1780B4();
      result = *(_DWORD *)(v12 + 112);
      break;
    case 8:
      sub_1780B4();
      result = *(_DWORD *)(v13 + 120);
      break;
    case 9:
      sub_1780B4();
      result = *(_DWORD *)(v14 + 128);
      break;
    case 0xA:
      sub_1780B4();
      result = *(_DWORD *)(v15 + 136);
      break;
    case 0xB:
      sub_1780B4();
      result = *(_DWORD *)(v16 + 156);
      break;
    case 0xC:
      sub_1780B4();
      result = *(_DWORD *)(v3 + 152);
      break;
    default:
      result = sub_236260(a2, *(char **)(a1 + 4));
      if ( !result )
      {
        switch ( *(_DWORD *)(a1 + 28) )
        {
          case 0xD:
            v18 = &off_46D508;
            v19 = "builtin_type_ieee_single";
            v20 = a2;
            break;
          case 0xE:
            v18 = &off_46D500;
            v19 = "builtin_type_ieee_double";
            v20 = a2;
            break;
          case 0xF:
            v18 = &off_46D4E0;
            v19 = "builtin_type_arm_ext";
            v20 = a2;
            break;
          case 0x10:
            v18 = &off_46D4F0;
            v19 = "builtin_type_i387_ext";
            v20 = a2;
            break;
          default:
            v21 = (_DWORD *)sub_94700(
                              (int)"target-descriptions.c",
                              314,
                              "Type \"%s\" has an unknown kind %d",
                              (const char *)*(_DWORD *)(a1 + 4),
                              *(_DWORD *)(a1 + 28));
            v26 = v22;
            v23 = v21;
            v24 = (void *)v21[7];
            *v23 = off_3E9B5C;
            if ( v24 )
              free(v24);
            v25 = (_DWORD *)v23[1];
            if ( v25 != v23 + 3 )
              sub_339E64(v25);
            __asm { POP             {R4,PC} }
            return result;
        }
        result = sub_177448(v20, -1, (int)v19, (int)v18);
      }
      break;
  }
  return result;
}
