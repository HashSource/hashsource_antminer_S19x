int __fastcall sub_1AC60(int a1)
{
  int v2; // r6
  int v3; // r4
  int result; // r0
  int v5; // r3

  switch ( dword_9EE34 )
  {
    case 4:
      v2 = 0;
      break;
    case 8:
      v2 = 1;
      break;
    case 12:
      v2 = 2;
      break;
    default:
      v2 = 0;
      break;
  }
  v3 = 0;
  do
  {
    while ( 1 )
    {
      result = (unsigned __int8)v3;
      v5 = dword_A0D68 + 4 * v3++;
      if ( *(_DWORD *)(v5 + 4) == 1 )
        break;
      if ( v3 == 16 )
        return result;
    }
    result = sub_75374(result, 1, v2, a1);
  }
  while ( v3 != 16 );
  return result;
}
