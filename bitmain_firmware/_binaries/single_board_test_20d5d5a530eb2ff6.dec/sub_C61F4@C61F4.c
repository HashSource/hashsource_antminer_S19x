int __fastcall sub_C61F4(int result)
{
  int v1; // r4

  v1 = result;
  if ( *(_DWORD *)(result + 96) == 5 )
    result = sub_C7460(*(_DWORD *)(result + 100));
  *(_DWORD *)(v1 + 100) = 0;
  return result;
}
