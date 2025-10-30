int sub_27E27C()
{
  __pid_t v0; // r0

  v0 = ps_getpid_0((int)&dword_4878EC);
  return kill(v0, 2);
}
