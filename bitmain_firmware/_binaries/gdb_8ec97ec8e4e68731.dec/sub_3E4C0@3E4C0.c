char *__fastcall sub_3E4C0(int a1)
{
  char *result; // r0

  switch ( a1 )
  {
    case 0:
      result = "generic 'call succeeded'";
      break;
    case 1:
      result = "generic error";
      break;
    case 2:
      result = "no thread to satisfy query";
      break;
    case 3:
      result = "no sync handle to satisfy query";
      break;
    case 4:
      result = "no LWP to satisfy query";
      break;
    case 5:
      result = "invalid process handle";
      break;
    case 6:
      result = "invalid thread handle";
      break;
    case 7:
      result = "invalid synchronization handle";
      break;
    case 8:
      result = "invalid thread agent";
      break;
    case 9:
      result = "invalid key";
      break;
    case 10:
      result = "no event message for getmsg";
      break;
    case 11:
      result = "FPU register set not available";
      break;
    case 12:
      result = "application not linked with libthread";
      break;
    case 13:
      result = "requested event is not supported";
      break;
    case 14:
      result = "capability not available";
      break;
    case 15:
      result = "debugger service failed";
      break;
    case 16:
      result = "operation not applicable to";
      break;
    case 17:
      result = "no thread-specific data for this thread";
      break;
    case 18:
      result = "malloc failed";
      break;
    case 19:
      result = "only part of register set was written/read";
      break;
    case 20:
      result = "X register set not available for this thread";
      break;
    case 21:
      result = "thread has not yet allocated TLS for given module";
      break;
    case 22:
      result = "versions of libpthread and libthread_db do not match";
      break;
    case 23:
      result = "there is no TLS segment in the given module";
      break;
    default:
      snprintf(byte_471BB0, 0x40u, "unknown thread_db error '%d'", a1);
      result = byte_471BB0;
      break;
  }
  return result;
}
