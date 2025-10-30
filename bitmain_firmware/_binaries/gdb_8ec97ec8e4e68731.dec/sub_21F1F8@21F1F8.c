int __fastcall sub_21F1F8(int result, int a2, int a3, int a4, char *a5, char *a6, int a7)
{
  int v7; // r10
  int i; // r8
  int j; // r12
  int v13; // r3
  _DWORD v14[6]; // [sp+8h] [bp-18h] BYREF

  v7 = result;
  for ( i = 0; ; i = 1 )
  {
    sub_258BD4(result);
    result = sub_C28A8(*(_DWORD **)(*(_DWORD *)(v7 + 32) + 4 * (i + 2)), v14);
    for ( j = result; result; j = result )
    {
      while ( 1 )
      {
        if ( a3 != 1 || (v13 = **(char **)(*(_DWORD *)(j + 24) + 24), v13 == 7) || v13 == 15 )
        {
          if ( !a7 || (*(_BYTE *)(j + 32) & 7) == 2 && a7 == **(char **)(*(_DWORD *)(j + 24) + 24) )
            break;
        }
        result = sub_C28E4((int)v14);
        j = result;
        if ( !result )
          goto LABEL_13;
      }
      sub_21F1AC(a2, j, a4, a5, a6);
      result = sub_C28E4((int)v14);
    }
LABEL_13:
    if ( i == 1 )
      break;
  }
  return result;
}
