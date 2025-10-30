_DWORD *__fastcall sub_1CD198(int a1, _DWORD *a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)(a1 + 4);
  if ( *a2 >= result[1] )
  {
    sub_94700(
      (int)"registry.c",
      102,
      "%s: Assertion `%s' failed.",
      "void registry_set_data(registry_fields*, const registry_data*, void*)",
      "data->index < fields->num_data");
    JUMPOUT(0x1E0D30);
  }
  *(_DWORD *)(*result + 4 * *a2) = a3;
  return result;
}
