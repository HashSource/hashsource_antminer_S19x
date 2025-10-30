int __fastcall main(int a1, char **a2, char **a3)
{
  execlp("login", "login", "-f", "root", 0);
  return 0;
}
