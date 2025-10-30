int __fastcall sub_9D47C(int a1, int a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // r4
  int v5; // r9
  int v6; // r0
  int v7; // r8
  int v8; // t1
  int result; // r0

  v4 = 0;
  v5 = *(unsigned __int8 *)(a1 + a2);
  v6 = a1 + a2;
  v7 = v5 - 48;
  if ( (unsigned int)(v5 - 48) <= 9 )
  {
    do
    {
      v8 = *(unsigned __int8 *)++v6;
      v5 = v8;
      ++a2;
      v4 = 10 * v4 + v7;
      v7 = v8 - 48;
    }
    while ( (unsigned int)(v8 - 48) <= 9 );
  }
  if ( v5 == 109 )
  {
    if ( a3 )
      *a3 = -v4;
    ++a2;
  }
  else if ( a3 )
  {
    *a3 = v4;
  }
  result = 1;
  if ( a4 )
    *a4 = a2;
  return result;
}
