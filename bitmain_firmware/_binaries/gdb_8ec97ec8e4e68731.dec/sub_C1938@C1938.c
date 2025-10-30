_DWORD *__fastcall sub_C1938(int a1, int a2)
{
  _DWORD *result; // r0
  int v5; // r3

  result = sub_93094(1u, 0x5Cu);
  if ( a1 )
    result[21] = a1;
  else
    LOWORD(v5) = 5488;
  if ( !a1 )
  {
    HIWORD(v5) = 12;
    result[21] = v5;
  }
  if ( a2 )
    result[22] = a2;
  else
    LOWORD(v5) = 5556;
  if ( !a2 )
  {
    HIWORD(v5) = 12;
    result[22] = v5;
  }
  return result;
}
