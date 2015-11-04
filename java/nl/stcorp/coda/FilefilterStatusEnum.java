/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.36
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package nl.stcorp.coda;

public enum FilefilterStatusEnum {
  coda_ffs_error,
  coda_ffs_could_not_open_file,
  coda_ffs_could_not_access_directory,
  coda_ffs_unsupported_file,
  coda_ffs_match,
  coda_ffs_no_match;

  public final int swigValue() {
    return swigValue;
  }

  public static FilefilterStatusEnum swigToEnum(int swigValue) {
    FilefilterStatusEnum[] swigValues = FilefilterStatusEnum.class.getEnumConstants();
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (FilefilterStatusEnum swigEnum : swigValues)
      if (swigEnum.swigValue == swigValue)
        return swigEnum;
    throw new IllegalArgumentException("No enum " + FilefilterStatusEnum.class + " with value " + swigValue);
  }

  @SuppressWarnings("unused")
  private FilefilterStatusEnum() {
    this.swigValue = SwigNext.next++;
  }

  @SuppressWarnings("unused")
  private FilefilterStatusEnum(int swigValue) {
    this.swigValue = swigValue;
    SwigNext.next = swigValue+1;
  }

  @SuppressWarnings("unused")
  private FilefilterStatusEnum(FilefilterStatusEnum swigEnum) {
    this.swigValue = swigEnum.swigValue;
    SwigNext.next = this.swigValue+1;
  }

  private final int swigValue;

  private static class SwigNext {
    private static int next = 0;
  }
}

