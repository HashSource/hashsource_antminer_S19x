int __fastcall sub_106DAC(int a1, int a2, size_t a3, char *a4)
{
  int v8; // r0
  int v9; // r7
  int result; // r0
  _DWORD *v11; // r0
  int v12; // r0
  size_t n; // [sp+4h] [bp-4h] BYREF

  v8 = sub_DB984(a1);
  v9 = v8;
  switch ( a2 )
  {
    case 1:
      result = 1;
      break;
    case 6:
    case 7:
      if ( a2 == 6 )
      {
        n = a3;
      }
      else
      {
        v11 = (_DWORD *)sub_DB988(a1);
        a4 = (char *)sub_D9FE8(v11, &n);
      }
      if ( a4 && n == 16 && sub_1280A4(v9, a4, 0x10u) )
      {
        v12 = sub_AE2B4(v9);
        result = sub_167DC8(v9 + 16, v12, 0);
      }
      else
      {
        result = 0;
      }
      break;
    case 14:
      result = sub_167D78(v8 + 16, a3);
      break;
    default:
      result = -2;
      break;
  }
  return result;
}
