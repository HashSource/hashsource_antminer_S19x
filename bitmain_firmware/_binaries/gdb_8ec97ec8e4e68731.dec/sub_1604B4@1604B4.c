const char *__fastcall sub_1604B4(int a1)
{
  const char *result; // r0

  switch ( a1 )
  {
    case 0:
      result = "no reason";
      break;
    case 1:
      result = "unwinder did not report frame ID";
      break;
    case 2:
      result = "outermost";
      break;
    case 3:
      result = "not enough registers or memory available to unwind further";
      break;
    case 4:
      result = "previous frame inner to this frame (corrupt stack?)";
      break;
    case 5:
      result = "previous frame identical to this frame (corrupt stack?)";
      break;
    case 6:
      result = "frame did not save the PC";
      break;
    case 7:
      result = "memory error while unwinding";
      break;
    default:
      sub_94700((int)"frame.c", 2825, "Invalid frame stop reason");
      JUMPOUT(0x16055C);
  }
  return result;
}
