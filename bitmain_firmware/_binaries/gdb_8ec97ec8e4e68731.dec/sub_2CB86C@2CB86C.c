char *__fastcall sub_2CB86C(int a1)
{
  char *result; // r0
  int v3; // r5

  result = sub_2AD7AC(a1, ".rel.plt.unloaded");
  if ( result || (result = sub_2AD7AC(a1, ".rela.plt.unloaded")) != 0 )
  {
    v3 = *((_DWORD *)result + 35);
    *(_DWORD *)(v3 + 28) = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 2320);
    result = sub_2AD7AC(a1, ".plt");
    if ( result )
      *(_DWORD *)(v3 + 32) = *(_DWORD *)(*((_DWORD *)result + 35) + 92);
  }
  return result;
}
