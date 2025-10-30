int __fastcall sub_291030(int result)
{
  int v1; // r5
  int v2; // r3
  int v3; // r0
  __pid_t v4; // r0
  sigset_t v5; // [sp+0h] [bp-84h] BYREF

  v1 = result;
  v2 = dword_48AAA0 | 0x8000;
  dword_48AAA0 |= 0x8000u;
  switch ( result )
  {
    case 2:
      sub_286210();
      sub_290DFC(v3);
      goto LABEL_3;
    case 3:
    case 14:
    case 15:
    case 20:
    case 21:
    case 22:
LABEL_3:
      sub_290F38(v1);
      sub_290D9C();
      sigemptyset(&v5);
      sigprocmask(0, 0, &v5);
      sigdelset(&v5, v1);
      v4 = getpid();
      kill(v4, v1);
      sigprocmask(2, &v5, 0);
      result = sub_290DC8();
      v2 = dword_48AAA0;
      break;
    default:
      break;
  }
  dword_48AAA0 = v2 & 0xFFFF7FFF;
  return result;
}
