int __fastcall sub_183680(int a1, _DWORD *a2)
{
  _DWORD *v2; // r0

  v2 = (_DWORD *)(a1 + 172);
  if ( *a2 >= v2[1] )
  {
    sub_94700(
      (int)"registry.c",
      110,
      "%s: Assertion `%s' failed.",
      "void* registry_data(registry_fields*, const registry_data*)",
      "data->index < fields->num_data");
    JUMPOUT(0x1E0D80);
  }
  return *(_DWORD *)(*v2 + 4 * *a2);
}
