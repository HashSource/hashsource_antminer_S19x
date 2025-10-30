int __fastcall sub_BE184(int a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r2

  result = a2[1];
  v5 = *(_DWORD *)(result + 24);
  switch ( *(_BYTE *)v5 )
  {
    case 2:
      result = *(_DWORD *)(v5 + 20);
      goto LABEL_3;
    case 3:
    case 4:
      return result;
    case 7:
LABEL_3:
      a2[1] = sub_1700C0(result);
      *a2 = 0;
      return sub_BE0D4(a1, a2);
    default:
      return sub_BE0D4(a1, a2);
  }
}
