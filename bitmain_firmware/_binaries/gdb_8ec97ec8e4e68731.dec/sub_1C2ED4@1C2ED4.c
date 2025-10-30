int __fastcall sub_1C2ED4(int a1, int a2)
{
  int result; // r0
  bool v5; // cc
  int v6; // [sp+0h] [bp-8h]
  int v7; // [sp+4h] [bp-4h]

  (*(void (**)(void))(*(_DWORD *)(*(_DWORD *)a1 + 32) + 4))();
  result = v6;
  if ( v7 > 0 )
  {
    do
    {
      result = sub_1C2ED4(a1, a2 - result) + v6;
      v5 = v7 - 1 <= 0;
      v6 = result;
      --v7;
    }
    while ( !v5 );
  }
  return result;
}
