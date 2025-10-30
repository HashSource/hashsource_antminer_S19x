int __fastcall sub_2568B8(int a1, FILE *stream)
{
  int result; // r0

  *(_DWORD *)(a1 + 4) = stream;
  result = fileno(stream);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
