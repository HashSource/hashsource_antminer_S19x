int __fastcall sub_C6D88(int a1)
{
  char *v1; // r2

  v1 = "load";
  if ( !*(_BYTE *)(a1 + 136) )
    v1 = "unload";
  return sub_259F10("Catchpoint %d (%s)", *(_DWORD *)(a1 + 24), v1);
}
