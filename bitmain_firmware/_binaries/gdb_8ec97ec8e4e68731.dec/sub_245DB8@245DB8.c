signed int __fastcall sub_245DB8(int a1)
{
  signed int result; // r0

  result = fwrite(&unk_3EDDCC, 8u, 1u, *(FILE **)(a1 + 4));
  if ( result <= 0 )
    sub_258B04(*(_DWORD *)(a1 + 8));
  return result;
}
