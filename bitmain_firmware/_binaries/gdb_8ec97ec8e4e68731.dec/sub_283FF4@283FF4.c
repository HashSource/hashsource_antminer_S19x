int __fastcall sub_283FF4(int result, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v5; // lr
  int v6; // r1
  int v7; // r1
  int v8; // r2
  int v9; // r2

  if ( a2 )
  {
    v5 = *(unsigned __int8 *)(result + 8 * (__int16)a2);
    v6 = result + 8 * (__int16)a2;
    if ( !v5 )
      *(_DWORD *)(v6 + 4) = 2711572;
  }
  if ( a3 )
  {
    v7 = *(unsigned __int8 *)(result + 8 * (__int16)a3);
    v8 = result + 8 * (__int16)a3;
    if ( !v7 )
      *(_DWORD *)(v8 + 4) = sub_292208;
  }
  if ( a5 && !*(_BYTE *)(result + 8 * a5) )
    *(_DWORD *)(result + 8 * a5 + 4) = 2710044;
  if ( a4 )
  {
    v9 = *(unsigned __int8 *)(result + 8 * (__int16)a4);
    result += 8 * (__int16)a4;
    if ( !v9 )
      *(_DWORD *)(result + 4) = sub_291FD0;
  }
  return result;
}
