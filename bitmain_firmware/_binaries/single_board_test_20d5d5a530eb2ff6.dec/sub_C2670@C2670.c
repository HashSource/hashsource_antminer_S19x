int __fastcall sub_C2670(int a1)
{
  int v1; // r0
  int v2; // r0

  v1 = sub_C59B8(*(_DWORD *)(a1 + 24));
  v2 = sub_C6248(v1);
  if ( v2 >= 512 )
    return 256;
  if ( v2 >= 384 )
    return 192;
  if ( v2 > 255 )
    return 128;
  if ( v2 > 223 )
    return 112;
  if ( v2 <= 159 )
    return v2 / 2;
  return 80;
}
