int __fastcall sub_24A7DC(int result)
{
  int v1; // r4

  v1 = result;
  if ( dword_48A514 )
    result = sub_259F10("collect static trace data\n");
  *(_BYTE *)(v1 + 56) = 1;
  return result;
}
