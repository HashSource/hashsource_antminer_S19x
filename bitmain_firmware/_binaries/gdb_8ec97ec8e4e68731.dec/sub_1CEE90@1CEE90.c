int __fastcall sub_1CEE90(int result)
{
  int v1; // r4
  int *i; // r4
  int v3; // r0
  _DWORD *v4; // r0

  if ( *(_DWORD *)(result + 24) )
  {
    v1 = result;
    sub_259F10("Psymtabs:\n");
    for ( i = *(int **)(v1 + 24); i; i = (int *)*i )
    {
      v3 = sub_259F10("%s at ", (const char *)i[1]);
      v4 = (_DWORD *)sub_242F8C(v3);
      sub_25A44C(i, *v4);
      sub_259F10(", ");
      sub_259B58("  ");
    }
    return sub_259F10("\n\n");
  }
  return result;
}
