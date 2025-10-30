int sub_17E8C4()
{
  int result; // r0

  result = sub_23F1E0(dword_4878EC, dword_4878F0, dword_4878F4);
  if ( result )
    sub_946E0("Cannot execute this command while the selected thread is running.");
  return result;
}
