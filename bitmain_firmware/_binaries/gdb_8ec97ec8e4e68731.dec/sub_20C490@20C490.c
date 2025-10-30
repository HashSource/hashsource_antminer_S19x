int __fastcall sub_20C490(_DWORD *a1, void (__fastcall *a2)(int, int, int), int a3)
{
  int result; // r0
  int i; // r4
  unsigned int v7; // r2
  int v8; // r2
  int v9; // r0
  _DWORD v10[6]; // [sp+0h] [bp-18h] BYREF

  result = sub_C28A8(a1, v10);
  for ( i = result; result; i = result )
  {
    v7 = *(unsigned __int8 *)(i + 32);
    switch ( *((_DWORD *)off_46DBB8 + 4 * (v7 >> 3)) )
    {
      case 2:
      case 3:
      case 7:
      case 0xD:
      case 0xE:
        v8 = v7 & 7;
        if ( (*(_BYTE *)(i + 33) & 2) == 0 && v8 != 5 )
        {
          if ( dword_46D448 )
            v9 = sub_21B3C4(i);
          else
            v9 = *(_DWORD *)i;
          a2(v9, i, a3);
        }
        break;
      default:
        break;
    }
    result = sub_C28E4((int)v10);
  }
  return result;
}
