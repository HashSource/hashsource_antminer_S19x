int sub_BCC20()
{
  int v0; // r0
  int *v1; // r0
  int result; // r0

  v0 = sub_22EAC0();
  if ( !v0 )
    sub_946E0("The program has no auxiliary information now.");
  v1 = (int *)sub_242F8C(v0);
  result = sub_BCB80(*v1, (int)&dword_4899A0);
  if ( result < 0 )
    sub_946E0("No auxiliary vector found, or failed reading it.");
  if ( !result )
    sub_946E0("Auxiliary vector is empty.");
  return result;
}
