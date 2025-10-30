void *__fastcall sub_1E0B10(int a1, _DWORD *a2)
{
  size_t v2; // r0
  void *result; // r0

  if ( *a2 )
  {
    sub_94700(
      (int)"registry.c",
      49,
      "%s: Assertion `%s' failed.",
      "void registry_alloc_data(registry_data_registry*, registry_fields*)",
      "fields->data == NULL");
    JUMPOUT(0x1E0B70);
  }
  v2 = *(_DWORD *)(a1 + 4);
  a2[1] = v2;
  result = sub_93094(v2, 4u);
  *a2 = result;
  return result;
}
