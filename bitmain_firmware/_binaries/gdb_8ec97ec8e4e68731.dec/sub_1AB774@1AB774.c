int __fastcall sub_1AB774(int a1, int *a2, int a3, int a4, int a5, const char *a6)
{
  int result; // r0
  int v9; // r10
  int v10; // r9
  int v11; // r1
  unsigned int v12; // r7
  int v13; // r8
  int v14; // r11
  int v15; // r0
  int v16; // r5
  int v17; // r10
  int v18; // r6
  _DWORD *v19; // r0
  int v20; // r0
  int v21; // r0
  int v23; // [sp+Ch] [bp-10h]
  unsigned int v24; // [sp+14h] [bp-8h] BYREF

  switch ( a3 )
  {
    case 1:
      *a2 = (int)sub_1700C0((_DWORD *)*a2);
      result = 0;
      break;
    case 2:
      *a2 = sub_170358(*a2);
      result = 0;
      break;
    case 3:
      v9 = a4 + 4;
      v10 = a4 + 8;
      (*(void (__fastcall **)(int, int, unsigned int *))(dword_487AA8 + 76))(a5, a4, &v24);
      v11 = v24 & 0xFFF;
      v12 = v24 >> 12;
      v13 = a4 + 12;
      if ( v11 == 4095 )
      {
        v23 = a4 + 16;
        v14 = 5;
        if ( a5 )
          v21 = sub_2AB5EC(v9);
        else
          v21 = sub_2AB5F8(v9);
        v9 = v10;
        v11 = v21;
        v10 = v13;
        v13 = v23;
      }
      else
      {
        v14 = 4;
      }
      v15 = sub_1A721C(a1, v11);
      v16 = sub_1AAC98(
              954437177 * ((v15 - *(_DWORD *)(dword_487AA4 + 152)) >> 3),
              *(_DWORD *)(dword_487AA4 + 116) + 4 * *(_DWORD *)(v15 + 44),
              v12,
              0,
              a5,
              a6);
      if ( **(_BYTE **)(v16 + 24) != 8 )
      {
        if ( dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "illegal array index type for %s, assuming int", a6);
        v16 = *(_DWORD *)(sub_1780C4(dword_487ABC) + 12);
      }
      if ( a5 )
      {
        v17 = sub_2AB5EC(v9);
        v18 = sub_2AB5EC(v10);
        sub_2AB5EC(v13);
      }
      else
      {
        v17 = sub_2AB5F8(v9);
        v18 = sub_2AB5F8(v10);
        sub_2AB5F8(v13);
      }
      v19 = (_DWORD *)sub_171928(0, (_DWORD *)v16, v17, v17 >> 31, v18, v18 >> 31);
      v20 = sub_172124(0, (_DWORD *)*a2, v19);
      if ( !*(_DWORD *)(*a2 + 20) )
        *(_BYTE *)(*(_DWORD *)(v20 + 24) + 1) |= 8u;
      *a2 = v20;
      result = v14;
      break;
    case 5:
    case 6:
      goto LABEL_3;
    default:
      if ( dword_47AC88 > 0 )
      {
        sub_F43B4(&off_46D334, "unknown type qualifier 0x%x", a3);
        result = 0;
      }
      else
      {
LABEL_3:
        result = 0;
      }
      break;
  }
  return result;
}
