int __fastcall bread_conv(int a1, int a2, int a3, int *a4)
{
  int result; // r0
  int v6; // r3

  if ( a3 < 0 )
    a3 = 0x7FFFFFFF;
  result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 20))(a1, a2, a3);
  if ( result <= 0 )
    v6 = 0;
  else
    v6 = result;
  if ( result > 0 )
    result = 1;
  *a4 = v6;
  return result;
}
