int __fastcall sub_1541C0(int result)
{
  unsigned int v1; // r4

  v1 = dword_487668;
  if ( !*(_DWORD *)(dword_487668 + 68) )
  {
    sub_22EFF4(result);
    result = sub_152D58(*(_DWORD *)(v1 + 60), (unsigned int)sub_153A4C, v1);
    *(_DWORD *)(v1 + 68) = 1;
  }
  return result;
}
