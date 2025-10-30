int sub_17E884()
{
  int result; // r0

  if ( sub_98F78(&dword_4878EC, &dword_475848) || (result = sub_23F1C4(dword_4878EC, dword_4878F0, dword_4878F4)) != 0 )
    sub_946E0("Cannot execute this command without a live selected thread.");
  return result;
}
