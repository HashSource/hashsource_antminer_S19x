int __fastcall sub_173720(_DWORD *a1)
{
  int result; // r0

  result = sub_171258(a1);
  if ( result )
    return (**(char **)(result + 24) & 0xFFFFFFEF) == 9;
  return result;
}
