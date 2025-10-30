int sub_17F22C()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0

  if ( sub_98F78(&dword_4878EC, &dword_475848) )
    sub_946E0("The program is not being run.");
  if ( !sub_25A3E4("Kill the program being debugged? ") )
    sub_946E0("Not confirmed.");
  v0 = sub_22EF14();
  v1 = sub_183CA8(v0);
  if ( !v1 )
  {
    v2 = sub_23E154(0);
    v1 = sub_22EAC0(v2);
    if ( v1 )
    {
      sub_259F10("In %s,\n", (const char *)dword_4899A8);
      v3 = sub_15F7E8(0);
      v1 = sub_20E7E8(v3, 1, 1);
    }
  }
  return sub_2A8F64(v1);
}
